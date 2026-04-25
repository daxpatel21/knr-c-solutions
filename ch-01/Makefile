# =============================================================================
# Chapter Makefile — delegates to each exercise subfolder
# =============================================================================
# Drop this Makefile inside any ch-XX/ folder.
# It auto-discovers all ex-X-XX/ subdirectories.
# =============================================================================

EXERCISES := $(wildcard ex-*/.)

.PHONY: all clean $(EXERCISES)

all: $(EXERCISES)

$(EXERCISES):
	$(MAKE) -C $@ all

clean:
	@for ex in $(EXERCISES); do \
		$(MAKE) -C $$ex clean; \
	done
