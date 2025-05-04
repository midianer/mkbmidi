import time
import rtmidi
import subprocess

p = subprocess.Popen('aconnect -l', shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
for line in p.stdout.readlines():
    print(line)
retval = p.wait()


midiin = rtmidi.MidiIn()
available_ports = midiin.get_ports()
print(available_ports)

midiout = rtmidi.MidiOut()
available_ports = midiout.get_ports()
print(available_ports)

numdev = midiin.get_port_count()
for i in range(numdev):
    print(midiin.get_port_name(i))

numdev = midiout.get_port_count()
for i in range(numdev):
    print(midiout.get_port_name(i))





