SHELL=/bin/bash
args = `arg="$(filter-out $@,$(MAKECMDGOALS))" && echo $${arg:-${1}}`

test:
	g++ $(call args, defaultstring) -g -DDEBUG -o out && cat testcase | ./out
	
run:
	g++ $(call args, defaultstring) -o out && ./out


%:
	@:
