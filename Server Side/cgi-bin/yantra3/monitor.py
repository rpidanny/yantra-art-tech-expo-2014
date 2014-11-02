#!/usr/bin/env python


import serial
import cgi
import cgitb; cgitb.enable()  # for troubleshooting

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
ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
ser.write(message)
ser.close()

f = open('names.txt','a')
f.write(name+'\n') 
f.close()

print message
print """
Working
</body>
</html>
"""

