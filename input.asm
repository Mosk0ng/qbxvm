include 'qbx_insn_helpers.inc'
include 'qbx_instructions.inc'

qbx_insns define_icodes, 0

dw moviwq0, 1,  \
   compi, 2, \
   jeq, 0, \
   moviwq0, 2,  \
   compi, 2, \
   jeq, 0, \
   halt