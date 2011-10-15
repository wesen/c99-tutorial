CFLAGS += -std=c99 -Wall -g
# macosx setting
OBJDUMP = gobjdump

%.s: %.elf
	$(OBJDUMP) -d -S -C $<

%.elf: %.c
	$(CC) $(CFLAGS) -o $@ $<

#%.s: %.c
#	$(CC) $(CFLAGS) -fverbose-asm -S -o $@ $<
