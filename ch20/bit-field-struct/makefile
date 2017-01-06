APP				= bit-field-struct

CC				= gcc
CFLAGS		= -Wall -W -pedantic -ansi -std=c99

SRC_DIR		= .
BIN_DIR		= out

SRCS_NAME			= $(shell find $(SRC_DIR) -name '*.c')
SRCDIRS_NAME	= $(shell find $(SRC_DIR) -name '*.c' -exec dirname {} \; | uniq)
BINS_NAME			= $(patsubst %.c, $(BIN_DIR)/%.o, $(SRCS_NAME))

all : $(APP)

$(APP) : buildrepo $(BINS_NAME)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $(BINS_NAME)

$(BIN_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	$(RM) $(BINS_NAME)

distclean : clean
	$(RM) $(APP)

buildrepo :
	@$(call make-repo)

define make-repo
	for dir in $(SRCDIRS_NAME); do \
		mkdir -p $(BIN_DIR)/$$dir;   \
	done
endef
