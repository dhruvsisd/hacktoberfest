import re
num_misspelled = 0
for _ in range(int(input())):
	num_misspelled += 0 if re.match(r"^sp[o0]{2,}ky$", input(), re.IGNORECASE) else 1
print(num_misspelled)
