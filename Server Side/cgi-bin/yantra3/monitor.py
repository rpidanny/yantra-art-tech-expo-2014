#!/Python27/python

#!/usr/bin/env python
import cgi
import cgitb; cgitb.enable()  # for troubleshooting

form = cgi.FieldStorage()
name=form.getvalue("name", "(no name)")

print 'Content-type: text/html\r\n\r\n'
print """<html>
<head>
<title>Yantra</title>
</head>
<body>
"""
f = open('names.txt','a')
f.write(name+'\n') 
f.close()

print """
Working
</body>
</html>
"""


#!/Python27/python