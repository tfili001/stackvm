.PHONY: clean All

All:
	@echo "----------Building project:[ vm - Debug ]----------"
	@"$(MAKE)" -f  "vm.mk"
clean:
	@echo "----------Cleaning project:[ vm - Debug ]----------"
	@"$(MAKE)" -f  "vm.mk" clean
