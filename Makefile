.PHONY: clean All

All:
	@echo "----------Building project:[ car - Debug ]----------"
	@cd "/home/tim/Documents/car" && "$(MAKE)" -f  "car.mk"
clean:
	@echo "----------Cleaning project:[ car - Debug ]----------"
	@cd "/home/tim/Documents/car" && "$(MAKE)" -f  "car.mk" clean
