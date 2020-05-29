; define constants for each instruction code.
macro define_icodes base, [insn*] {
common
        local next_icode
        next_icode = base
forward
        insn = next_icode
        next_icode = next_icode + 1
}

macro define_jmp_table jmp_table_name*, [op*]{
common
        jmp_table_name:
forward
        dw IMPL_#op
}

macro insn name{
      IMPL_#name = $ - insn_base
      update_qbx_flags = 0
}

macro endinsn {
      if update_qbx_flags
         jmp update_flags_advance
      else
        jmp advance
      end if
}