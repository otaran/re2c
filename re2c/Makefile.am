# flags
# do *not* add CXXFLAGS here, add them in configure.ac
AM_CXXFLAGS = $(CXXFLAGSDEFAULT)
RE2CFLAGS = -b

# binary
bin_PROGRAMS = re2c
RE2C = re2c$(EXEEXT)

# sources
SRC_HDR = \
	src/codegen/bitmap.h \
	src/codegen/emit.h \
	src/codegen/go.h \
	src/codegen/indent.h \
	src/codegen/input_api.h \
	src/codegen/label.h \
	src/codegen/output.h \
	src/codegen/print.h \
	src/codegen/scc.h \
	src/codegen/skeleton/path.h \
	src/codegen/skeleton/way.h \
	src/codegen/skeleton/skeleton.h \
	src/conf/msg.h \
	src/conf/opt.h \
	src/conf/warn.h \
	src/ir/bytecode/charset.h \
	src/ir/bytecode/bytecode.h \
	src/ir/bytecode/ins.h \
	src/ir/dfa/state.h \
	src/ir/dfa/dfa.h \
	src/ir/dfa/action.h \
	src/ir/regexp/encoding/case.h \
	src/ir/regexp/encoding/enc.h \
	src/ir/regexp/encoding/range_suffix.h \
	src/ir/regexp/encoding/utf8/utf8.h \
	src/ir/regexp/encoding/utf8/utf8_regexp.h \
	src/ir/regexp/encoding/utf8/utf8_range.h \
	src/ir/regexp/encoding/utf16/utf16_range.h \
	src/ir/regexp/encoding/utf16/utf16_regexp.h \
	src/ir/regexp/encoding/utf16/utf16.h \
	src/ir/regexp/empty_class_policy.h \
	src/ir/regexp/regexp_alt.h \
	src/ir/regexp/regexp_match.h \
	src/ir/regexp/regexp_rule.h \
	src/ir/regexp/regexp_cat.h \
	src/ir/regexp/regexp_null.h \
	src/ir/regexp/regexp.h \
	src/ir/regexp/regexp_close.h \
	src/ir/rule_rank.h \
	src/globals.h \
	src/parse/code.h \
	src/parse/extop.h \
	src/parse/input.h \
	src/parse/loc.h \
	src/parse/parser.h \
	src/parse/rules.h \
	src/parse/scanner.h \
	src/parse/spec.h \
	src/parse/unescape.h \
	src/util/allocate.h \
	src/util/attribute.h \
	src/util/c99_stdint.h \
	src/util/counter.h \
	src/util/forbid_copy.h \
	src/util/free_list.h \
	src/util/local_increment.h \
	src/util/range.h \
	src/util/s_to_n32_unsafe.h \
	src/util/smart_ptr.h \
	src/util/static_assert.h \
	src/util/u32lim.h \
	src/util/uniq_vector.h
SRC = \
	src/codegen/bitmap.cc \
	src/codegen/emit_action.cc \
	src/codegen/emit_dfa.cc \
	src/codegen/label.cc \
	src/codegen/prepare_dfa.cc \
	src/codegen/go_construct.cc \
	src/codegen/go_destruct.cc \
	src/codegen/go_emit.cc \
	src/codegen/go_used_labels.cc \
	src/codegen/input_api.cc \
	src/codegen/output.cc \
	src/codegen/print.cc \
	src/codegen/scc.cc \
	src/codegen/skeleton/control_flow.cc \
	src/codegen/skeleton/generate_code.cc \
	src/codegen/skeleton/generate_data.cc \
	src/codegen/skeleton/match_empty.cc \
	src/codegen/skeleton/maxlen.cc \
	src/codegen/skeleton/skeleton.cc \
	src/codegen/skeleton/unreachable.cc \
	src/codegen/skeleton/way.cc \
	src/conf/msg.cc \
	src/conf/opt.cc \
	src/conf/warn.cc \
	src/ir/bytecode/bytecode.cc \
	src/ir/bytecode/ins.cc \
	src/ir/bytecode/charset.cc \
	src/ir/bytecode/split.cc \
	src/ir/bytecode/compile.cc \
	src/ir/bytecode/calc_size.cc \
	src/ir/dfa/dfa.cc \
	src/ir/regexp/display.cc \
	src/ir/regexp/encoding/enc.cc \
	src/ir/regexp/encoding/range_suffix.cc \
	src/ir/regexp/encoding/utf8/utf8_regexp.cc \
	src/ir/regexp/encoding/utf8/utf8_range.cc \
	src/ir/regexp/encoding/utf8/utf8.cc \
	src/ir/regexp/encoding/utf16/utf16_regexp.cc \
	src/ir/regexp/encoding/utf16/utf16.cc \
	src/ir/regexp/encoding/utf16/utf16_range.cc \
	src/ir/regexp/fixed_length.cc \
	src/ir/regexp/regexp.cc \
	src/ir/rule_rank.cc \
	src/main.cc \
	src/parse/code.cc \
	src/parse/input.cc \
	src/parse/scanner.cc \
	src/parse/unescape.cc \
	src/util/s_to_n32_unsafe.cc \
	src/util/range.cc
re2c_SOURCES = \
	$(SRC_HDR) \
	$(SRC)

# autogenerated sources
AUTOGEN_LEX = src/parse/lex.cc
AUTOGEN_LEX_CONF = src/parse/lex_conf.cc
AUTOGEN_PARSEOPT = src/conf/parse_opts.cc
AUTOGEN_PARSER = src/parse/parser.cc
AUTOGEN_PARSER_HDR = src/parse/y.tab.h
AUTOGEN = \
	$(AUTOGEN_LEX) \
	$(AUTOGEN_LEX_CONF) \
	$(AUTOGEN_PARSER) \
	$(AUTOGEN_PARSER_HDR) \
	$(AUTOGEN_PARSEOPT)
nodist_re2c_SOURCES = $(AUTOGEN)

# bootstrap sources
BOOTSTRAP_LEX = bootstrap/src/parse/lex.cc
BOOTSTRAP_LEX_CONF = bootstrap/src/parse/lex_conf.cc
BOOTSTRAP_PARSEOPT = bootstrap/src/conf/parse_opts.cc
BOOTSTRAP_PARSER = bootstrap/src/parse/parser.cc
BOOTSTRAP_PARSER_HDR = bootstrap/src/parse/y.tab.h
BOOTSTRAP_DOC = bootstrap/doc/re2c.1
BOOTSTRAP = \
	$(BOOTSTRAP_LEX) \
	$(BOOTSTRAP_LEX_CONF) \
	$(BOOTSTRAP_DOC) \
	$(BOOTSTRAP_PARSER) \
	$(BOOTSTRAP_PARSER_HDR) \
	$(BOOTSTRAP_PARSEOPT)

# custom sources
CUSTOM_LEX = src/parse/lex.re
CUSTOM_LEX_CONF = src/parse/lex_conf.re
CUSTOM_PARSEOPT = src/conf/parse_opts.re
CUSTOM_PARSER = src/parse/parser.ypp
CUSTOM = \
	$(CUSTOM_LEX) \
	$(CUSTOM_LEX_CONF) \
	$(CUSTOM_PARSER) \
	$(CUSTOM_PARSEOPT)

# docs
SRC_DOC = doc/manpage.rst
DOC = doc/re2c.1
man_MANS = $(DOC)

EXTRA_DIST = \
	$(BOOTSTRAP) \
	$(CUSTOM) \
	CHANGELOG \
	NO_WARRANTY \
	README \
	autogen.sh \
	doc/loplas.ps \
	doc/sample.bib \
	examples \
	test

CLEANFILES = \
	$(AUTOGEN) \
	$(DOC)

$(AUTOGEN_PARSER): $(CUSTOM_PARSER)
	$(AM_V_GEN) if test $(BISON) = "no"; \
	then \
		cp $(top_srcdir)/$(BOOTSTRAP_PARSER) $@ && \
		cp $(top_srcdir)/$(BOOTSTRAP_PARSER_HDR) $(AUTOGEN_PARSER_HDR); \
	else \
		$(BISON) \
			--output=$@ \
			--defines=$(AUTOGEN_PARSER_HDR) \
			$(top_srcdir)/$(CUSTOM_PARSER); \
	fi

# lexer depends on bison-generated header
# so bison rule must be triggered before lexer rule
$(AUTOGEN_LEX): $(AUTOGEN_PARSER)

$(BOOTSTRAP_PARSER): $(CUSTOM_PARSER)
	$(AM_V_GEN) test $(BISON) = "no" || \
	$(BISON) \
		--output=$(top_srcdir)/$@ \
		--defines=$(top_srcdir)/$(BOOTSTRAP_PARSER_HDR) \
		--no-lines \
		$(top_srcdir)/$(CUSTOM_PARSER);

.re.cc:
	$(AM_V_GEN) if test -x $(RE2C); \
	then \
		$(top_builddir)/$(RE2C) $(RE2CFLAGS) -o $@ $< && \
		cp $@ $(top_srcdir)/bootstrap/$@; \
	else \
		cp $(top_srcdir)/bootstrap/$@ $@; \
	fi

# rebuild all re2c sources using newly built re2c
.PHONY: bootstrap
bootstrap: all
	rm $(top_builddir)/$(AUTOGEN_LEX)
	rm $(top_builddir)/$(AUTOGEN_LEX_CONF)
	rm $(top_builddir)/$(AUTOGEN_PARSEOPT)
	$(MAKE) all

.PHONY: docs
if REBUILD_DOCS
docs: $(DOC)
$(DOC): $(SRC_DOC)
	rst2man.py $(top_builddir)/$(SRC_DOC) > $@
	cp $@ $(top_srcdir)/$(BOOTSTRAP_DOC)
else
docs: $(DOC)
	@echo "Reconfigure to rebuild docs: ./configure --enable-docs"
$(DOC): $(BOOTSTRAP_DOC)
	cp $(top_srcdir)/$(BOOTSTRAP_DOC) $@
endif

all-local: docs $(BOOTSTRAP_PARSER)

# tests
TST_SUITE = run_tests.sh
.PHONY: tests
tests: all $(TST_SUITE)
	$(top_builddir)/$(TST_SUITE)
.PHONY: vtests
vtests: all $(TST_SUITE)
	$(top_builddir)/$(TST_SUITE) --valgrind
.PHONY: wtests
wtests: all $(TST_SUITE)
	$(top_builddir)/$(TST_SUITE) --wine -j1

TST_RANGE = testrange
testrange_SOURCES = \
	src/test/range/test-impl.h \
	src/test/range/test.cc \
	src/test/range/test.h \
	src/util/range.cc\
	src/util/range.h \
	src/util/static_assert.h

TST_S_TO_N32_UNSAFE = testston32unsafe
testston32unsafe_SOURCES = \
	src/test/s_to_n32_unsafe/test.cc \
	src/util/s_to_n32_unsafe.cc

check_PROGRAMS = \
	$(TST_RANGE) \
	$(TST_S_TO_N32_UNSAFE)

TESTS = $(TST_SUITE) $(check_PROGRAMS)
