#!/bin/bash

string1="id=001;name=Johan Strauss;address=58 Jalan Jelutong, 11600 Pulau Pinang, Malaysia;gender=male"

string2="id=002;name=Jennifer Teng;address=Q-2-4, Desa Indah, Lorong Minyak, 13000 Kedah, Malaysia;gender=female"


sed "s/^id=\([0-9]*\);name=\([^0-9]*\);address=\([^, ]*\)[^0-9]*\([0-9]*\)[, ]*\(.*\),.*gender=\(.*\)$/"Student:" \1\n"Name:" \2\n"House\ number:" \3\n"Postcode:" \4\n"State:" \5\n"Gender:" \6/" <<< "$string2"
