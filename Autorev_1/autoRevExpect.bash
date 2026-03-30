#!/usr/bin/expect -f

spawn nc mysterious-sea.picoctf.net 58766

for {set i 0} {$i < 21} {incr i} {

    expect -re {([0-9]+)\r?\n?Here\'s the next binary}
    set next_line $expect_out(1,string)
    set expect_out(buffer) ""

    expect "What's the secret?:"

    send "$next_line\n"

}

