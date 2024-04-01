.PHONY: all printSth xinchao clean
PRJ_NAME = test
# Khi them @ truoc command => Ko hien thi lenh khi make
printSth: xinchao clean
	@echo '$$@ ='
	@echo $@
	@echo '$$^ ='
	@echo $^
	@echo '$$< ='
	@echo $<
	
xinchao:
	echo "Xin chao"
	touch Xinchao.txt
print-%:
	@echo $($(subst print-,,$@))
clean:
	rm Xinchao.txt


