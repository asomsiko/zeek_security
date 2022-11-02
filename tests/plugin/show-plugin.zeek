# @TEST-EXEC: zeek -NN tutorial::plugin |sed -e 's/version.*)/version)/g' >output
# @TEST-EXEC: btest-diff output
