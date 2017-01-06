APP			= xor-encryption

CC			= gcc
CFALGS	= -Wall -W -pedantic -ansi -std=c99

SRCDIR = .
OBJDIR = out

#src names : access-bits/foo.c acces-bits.bar.c
SRCS		:= $(shell find $(SRCDIR) -name '*.c')
# name of src directories
SRCDIRS	:= $(shell find $(SRCDIR) -name '*.c' -exec dirname {} \; | uniq)
OBJS		:= $(patsubst %.c, $(OBJDIR)/%.o, $(SRCS))

all : $(APP)

$(APP) : buildrepo $(OBJS)
	$(CC) $(CFLAGS) -o $(OBJDIR)/$@ $(OBJS)

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

distclean: clean
	$(RM) $(APP)

buildrepo:
	@$(call make-repo)

define make-repo
	for dir in $(SRCDIRS); do   \
	  mkdir -p $(OBJDIR)/$$dir; \
	done
endef
