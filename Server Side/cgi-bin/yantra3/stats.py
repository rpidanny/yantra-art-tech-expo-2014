#!/Python27/python

#!/usr/bin/env python

#import serial
import cgi
import cgitb; cgitb.enable()  # for troubleshooting
from time import gmtime, strftime, sleep

form = cgi.FieldStorage()
message = form.getvalue("message", "(no message)")
name=form.getvalue("name", "(no name)")


print 'Content-type: text/html\r\n\r\n'
print """<html>
<head>
<title>Mood Stats</title>
</head>
<body>
"""
print "Happy : "
f = open('emotions/happy','r')
temp=f.read()
print len(temp)
f.close()

print "<br>Angry : "
f = open('emotions/angry','r')
temp=f.read()
print len(temp)
f.close()

print "<br>Relaxed : "
f = open('emotions/relaxed','r')
temp=f.read()
print len(temp)
f.close()

print "<br>In Love : "
f = open('emotions/inlove','r')
temp=f.read()
print len(temp)
f.close()

print "<br>Envy : "
f = open('emotions/envy','r')
temp=f.read()
print len(temp)
f.close()

print "<br>Mysterious : "
f = open('emotions/mysterious','r')
temp=f.read()
print len(temp)
f.close()

print """
</body>
</html>

"""

#!/Python27/python