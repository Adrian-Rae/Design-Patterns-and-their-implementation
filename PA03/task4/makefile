test: test.o User.o SocialSiteMediator.o SocialSiteUser.o ConcreteSocialSiteMediator.o Inbox.o OldStatus.o
	g++ test.cpp User.o SocialSiteMediator.o SocialSiteUser.o ConcreteSocialSiteMediator.o Inbox.o OldStatus.o -o test
	
User.o: User.cpp User.h
	g++ -c User.cpp
	
SocialSiteMediator.o: SocialSiteMediator.cpp SocialSiteMediator.h
	g++ -c SocialSiteMediator.cpp
	
SocialSiteUser.o: SocialSiteUser.cpp SocialSiteUser.h
	g++ -c SocialSiteUser.cpp
	
ConcreteSocialSiteMediator.o: ConcreteSocialSiteMediator.cpp ConcreteSocialSiteMediator.h
	g++ -c ConcreteSocialSiteMediator.cpp
	
Inbox.o: Inbox.cpp Inbox.h
	g++ -c Inbox.cpp
	
OldStatus.o: OldStatus.cpp OldStatus.h
	g++ -c OldStatus.cpp
	
run:
	./test

clean:
	rm -rf *o test *.tar
	
tar:
	tar -cvz -f PA02.tar *.h *.cpp makefile
	
all:
	
	make tar
	make clean
	make 
	make tar
	make run
