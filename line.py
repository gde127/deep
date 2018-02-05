non_blank_count = 0

with open('data.txt') as infp:
    for line in infp:
       if line.strip():
          non_blank_count += 1

print 'number of non-blank lines found %d' % non_blank_count
