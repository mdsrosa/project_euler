# Solves => https://github.com/mdsrosa/project_euler/issues/2

f = ->(x){ x < 2 ? x : f[x-1] + f[x-2] }

s = 0
a = 1
b = 1
c = a+b

while c < 4000000
  s += c # 2, 10
  a = b+c # 3, 13
  b = a+c # 5, 21
  c = a+b # 8, 34...
end
puts s
