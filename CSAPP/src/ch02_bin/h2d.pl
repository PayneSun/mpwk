#! /usr/bin/perl

for ($i = 0; $i < @ARGV; $i++) {
    $val = hex($ARGV[$i]);
    printf("0x%x = %d\n", $val, $val);
}
