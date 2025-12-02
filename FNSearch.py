vtable_start = 0x180380B60
slot_22_addr = vtable_start + 0xB0
func_addr = ida_bytes.get_qword(slot_22_addr)

ida_kernwin.jumpto(func_addr)
