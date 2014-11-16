#!/Python27/python



#!/usr/bin/env python

import serial
import cgi
import cgitb; cgitb.enable()  # for troubleshooting
from time import gmtime, strftime, sleep

form = cgi.FieldStorage()
message = form.getvalue("message", "(no message)")
name=form.getvalue("name", "(no name)")


print 'Content-type: text/html\r\n\r\n'
print """<html>
<head>
<title>Yantra</title>
</head>
<body>
"""
ser = serial.Serial('COM9', 9600, timeout=1)
sleep(0.5)
ser.write(message)
ser.close()

f = open('Instructions.txt','a')

if message=="a":
	f.write(name+'('+strftime("%Y-%m-%d %H:%M:%S", gmtime())+') : Happy\n')
	fa= open('emotions/happy','a')
	fa.write('1')
	fa.close
elif message=="b":
	f.write(name+'('+strftime("%Y-%m-%d %H:%M:%S", gmtime())+') : Angry\n')
	fa= open('emotions/angry','a')
	fa.write('1')
	fa.close
elif message=="c" :
	f.write(name+'('+strftime("%Y-%m-%d %H:%M:%S", gmtime())+') : Relaxed\n')
	fa= open('emotions/relaxed','a')
	fa.write('1')
	fa.close
elif message =="d":
	f.write(name+'('+strftime("%Y-%m-%d %H:%M:%S", gmtime())+') : In Love\n')
	fa= open('emotions/inlove','a')
	fa.write('1')
	fa.close
elif message =="e":
	f.write(name+'('+strftime("%Y-%m-%d %H:%M:%S", gmtime())+') : Envy\n')
	fa= open('emotions/envy','a')
	fa.write('1')
	fa.close
elif message =="f":
	f.write(name+'('+strftime("%Y-%m-%d %H:%M:%S", gmtime())+') : Mysterious\n')
	fa= open('emotions/mysterious','a')
	fa.write('1')
	fa.close
else:
	f.write(name+'('+strftime("%Y-%m-%d %H:%M:%S", gmtime())+') : Unknown\n')

f.close()

print name+ ': '+message+' at ' + strftime("%Y-%m-%d %H:%M:%S", gmtime())
print """
</body>
</html>
"""


#!/Python27/python