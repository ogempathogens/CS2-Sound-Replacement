import ida_bytes
import ida_kernwin
import idc

vtable_start = 0x180380B60
slot_22_addr = vtable_start + 0xB0

func_addr = ida_bytes.get_qword(slot_22_addr)
ida_kernwin.jumpto(func_addr)

signature = "__int64 __fastcall (__int64 this, int index)"
idc.SetType(func_addr, signature)

idc.set_name(func_addr, "CVSoundTypeManager_GetResource", idc.SN_NOWARN)

print("\n")
print(f"Addr: 0x{func_addr:X}")
print(f"Function: {signature}")
print(f"Matches desired function: __int64 func(__int64 this, int index)")
