# Solves => https://github.com/mdsrosa/project_euler/issues/2
s = 0
a = 1
b = 1
c = a+b
while c < 4000000
  s += c
  a = b+c
  b = a+c
  c = a+b
end
puts s
