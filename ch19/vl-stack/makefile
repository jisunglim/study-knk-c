APP			= $(shell basename $(CURDIR))

CC 			= gcc
CFLAGS	= -Wall -W -pedantic -std=c99

SRCDIR 	= src
OBJDIR 	= out

SRCS 	:= $(shell find $(SRCDIR) -name '*.c')
OBJS 	:= $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

SRC_SUBDIRS := $(shell find $(SRCDIR) -name '*.c' -exec dirname {} \; |uniq)
SRCDIRS := $(patsubst $(SRCDIR)%, .%, $(SRC_SUBDIRS))
INCDIRS := $(patsubst %, -I%, $(SRC_SUBDIRS))


all : $(APP)

$(APP) : buildrepo $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(INCDIRS)

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCDIRS)

clean :
	$(RM) $(OBJS)

distclean : clean cleanrepo
	$(RM) $(APP)

buildrepo :
	@$(call make-repo)

cleanrepo :
	@$(call clean-repo)

define make-repo
	for dir in $(SRCDIRS); do						\
		if [ "$$dir" != "." ]; then				\
			echo "mkdir -p $(OBJDIR)/$$dir";\
			mkdir -p $(OBJDIR)/$$dir;				\
		fi																\
	done
endef

define clean-repo
	for dir in $(SRCDIRS); do					\
		if [ "$$dir" != "." ]; then			\
			echo "rmdir $(OBJDIR)/$$dir";	\
			rmdir $(OBJDIR)/$$dir;				\
		fi															\
	done
endef
