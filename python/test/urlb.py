#!/usr/bin/python
import urllib2
response - urllib2.Request('http://admin:airlive@192.168.1.254/index.html')
req = urllib2.urlopen(response)
req.read()
