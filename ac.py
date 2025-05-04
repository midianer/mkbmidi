from subprocess import Popen, PIPE

process = Popen(["aconnect", "-l", "."], stdout=PIPE)
(output, err) = process.communicate()
exit_code = process.wait()
print(output)
outputl = (str(output)).split('\\n')
for i in range(len(outputl)):
  print(outputl[i])

