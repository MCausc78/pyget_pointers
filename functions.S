.text
.globl extra_get_rbp
.globl extra_get_rsp

extra_get_rbp:
	movq %rbp, %rdi
	callq PyLong_FromUnsignedLongLong
	ret
extra_get_rsp:
	movq %rsp, %rdi
	callq PyLong_FromUnsignedLongLong
	ret