#!/usr/bin/env python

#import serial
import cgi
import cgitb; cgitb.enable()  # for troubleshooting
from time import gmtime, strftime

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
#ser = serial.Serial('/dev/ttyUSB1', 9600, timeout=1)
#ser.write(message)
#ser.close()

f = open('Instructions.txt','a')

if message=="a":
	f.write(name+'('+strftime("%Y-%m-%d %H:%M:%S", gmtime())+') : Happy\n') 
elif message=="b":
	f.write(name+'('+strftime("%Y-%m-%d %H:%M:%S", gmtime())+') : Sad\n')
elif message=="c" :
	f.write(name+'('+strftime("%Y-%m-%d %H:%M:%S", gmtime())+') : Excited\n')
elif message =="d":
	f.write(name+'('+strftime("%Y-%m-%d %H:%M:%S", gmtime())+') : Sponge\n')
else:
	f.write(name+'('+strftime("%Y-%m-%d %H:%M:%S", gmtime())+') : Unknown\n')

f.close()

print name+ ': '+message+' at ' + strftime("%Y-%m-%d %H:%M:%S", gmtime())
print """
</body>
</html>
"""

