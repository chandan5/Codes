import requests
import bs4
import os

root_url = 'https://www.codechef.com'
username = 'chandan5/'
profile = root_url + '/users/' + username

def getPracticeProblems():
    response = requests.get(profile)
    print 'checking profile existence'
    if response.status_code == 200:
        print 'prifile exists'
    else:
        print '[Error] Either profile does not exist or check for requests error code ' + requests.status_code + 'on google'
#    print response.text
    
    soup = bs4.BeautifulSoup(response.text)
    print 'getting list of practice problems solved'
    solLinks = soup.p.find_all('a')
    for link in solLinks:
        resp = requests.get(root_url + link['href'])
        soup = bs4.BeautifulSoup(resp.text)
        probname = str(soup.find_all('h2')[1].find_all('a')[1].find_all(text=True)[0].lower())
        language = str(soup.find_all('table')[3].find_all('tr')[1].find_all('td')[6].find(text=True).lower())
	if language == 'c++ 4.8.1':
            language = 'cpp'
	filename = probname + '.' + language
	print filename
        codeLink = soup.find_all('table')[3].find_all('tr')[1].find_all('a')[1]['href']
   #     print codeLink
        os.system("w3m " + root_url + codeLink  + " -dump |  head -n -84 | tail -n+66 | cut -d '.' -f2- | cut -c 2- > " + filename)

getPracticeProblems()
