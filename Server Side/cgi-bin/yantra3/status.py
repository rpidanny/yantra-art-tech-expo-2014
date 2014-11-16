from time import gmtime, strftime, sleep

#while 1:
print "Happy : "
f = open('emotions/happy','r')
temp=f.read()
print len(temp)
f.close()

print "Angry : "
f = open('emotions/angry','r')
temp=f.read()
print len(temp)
f.close()

print "Relaxed : "
f = open('emotions/relaxed','r')
temp=f.read()
print len(temp)
f.close()

print "In Love : "
f = open('emotions/inlove','r')
temp=f.read()
print len(temp)
f.close()

print "Envy : "
f = open('emotions/envy','r')
temp=f.read()
print len(temp)
f.close()

print "Mysterious : "
f = open('emotions/mysterious','r')
temp=f.read()
print len(temp)
f.close()
