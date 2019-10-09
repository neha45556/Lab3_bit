# Test file for Lab3_bit


# commands.gdb provides the following functions for ease:
#   test "<message>"
#       Where <message> is the message to print. Must call this at the beginning of every test
#       Example: test "PINA: 0x00 => expect PORTC: 0x01"
#   checkResult
#       Verify if the test passed or failed. Prints "passed." or "failed." accordingly, 
#       Must call this at the end of every test.
#   expectPORTx <val>
#       With x as the port (A,B,C,D)
#       The value the port is epected to have. If not it will print the erroneous actual value
#   setPINx <val>
#       With x as the port or pin (A,B,C,D)
#       The value to set the pin to (can be decimal or hexidecimal
#       Example: setPINA 0x01
#   printPORTx f OR printPINx f 
#       With x as the port or pin (A,B,C,D)
#       With f as a format option which can be: [d] decimal, [x] hexadecmial (default), [t] binary 
#       Example: printPORTC d
#   printDDRx
#       With x as the DDR (A,B,C,D)
#       Example: printDDRB

echo ======================================================\n
echo Running all tests..."\n\n

test "PINA: 0x00, PINB: 0x00 => PORTC: 0x00" 
setPINA 0x00
continue 2
expectPORTB 0
expectPORTC 0x00
checkResult

test "PINA: 0xF2, PINB: 0x0F => PORTC: 0x20" 
setPINA 0xF2
setPINB 0x0F
continue 2
expectPORTC 2
checkResult

test "PINA: 0x82, PINB: 0x08 => PORTC: 0x20" 
setPINA 0x82
setPINB 0x08
continue 2
expectPORTC 2
checkResult

test "PINA: 0xA4, PINB: 0x0A => PORTC: 0x40" 
setPINA 0x0A
setPINB 0x40
continue 2
expectPORTC 8
checkResult


test "PINA: 0x28, PINB: 0x02 => PORTC: 0x08" 
setPINA 0x02
setPINB 0x08
continue 2
expectPORTC 8
checkResult





# Report on how many tests passed/tests ran
set $passed=$tests-$failed
eval "shell echo Passed %d/%d tests.\n",$passed,$tests
echo ======================================================\n
