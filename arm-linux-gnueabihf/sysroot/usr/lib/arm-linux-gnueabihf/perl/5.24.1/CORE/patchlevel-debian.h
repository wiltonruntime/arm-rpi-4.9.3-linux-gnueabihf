	,"DEBPKG:debian/cpan_definstalldirs - Provide a sensible INSTALLDIRS default for modules installed from CPAN."
	,"DEBPKG:debian/db_file_ver - https://bugs.debian.org/340047 Remove overly restrictive DB_File version check."
	,"DEBPKG:debian/doc_info - Replace generic man(1) instructions with Debian-specific information."
	,"DEBPKG:debian/enc2xs_inc - https://bugs.debian.org/290336 Tweak enc2xs to follow symlinks and ignore missing @INC directories."
	,"DEBPKG:debian/errno_ver - https://bugs.debian.org/343351 Remove Errno version check due to upgrade problems with long-running processes."
	,"DEBPKG:debian/libperl_embed_doc - https://bugs.debian.org/186778 Note that libperl-dev package is required for embedded linking"
	,"DEBPKG:fixes/respect_umask - Respect umask during installation"
	,"DEBPKG:debian/writable_site_dirs - Set umask approproately for site install directories"
	,"DEBPKG:debian/extutils_set_libperl_path - EU:MM: set location of libperl.a under /usr/lib"
	,"DEBPKG:debian/no_packlist_perllocal - Don't install .packlist or perllocal.pod for perl or vendor"
	,"DEBPKG:debian/fakeroot - Postpone LD_LIBRARY_PATH evaluation to the binary targets."
	,"DEBPKG:debian/instmodsh_doc - Debian policy doesn't install .packlist files for core or vendor."
	,"DEBPKG:debian/ld_run_path - Remove standard libs from LD_RUN_PATH as per Debian policy."
	,"DEBPKG:debian/libnet_config_path - Set location of libnet.cfg to /etc/perl/Net as /usr may not be writable."
	,"DEBPKG:debian/mod_paths - Tweak @INC ordering for Debian"
	,"DEBPKG:debian/prune_libs - https://bugs.debian.org/128355 Prune the list of libraries wanted to what we actually need."
	,"DEBPKG:fixes/net_smtp_docs - [rt.cpan.org #36038] https://bugs.debian.org/100195 Document the Net::SMTP 'Port' option"
	,"DEBPKG:debian/perlivp - https://bugs.debian.org/510895 Make perlivp skip include directories in /usr/local"
	,"DEBPKG:debian/deprecate-with-apt - https://bugs.debian.org/747628 Point users to Debian packages of deprecated core modules"
	,"DEBPKG:debian/squelch-locale-warnings - https://bugs.debian.org/508764 Squelch locale warnings in Debian package maintainer scripts"
	,"DEBPKG:debian/skip-upstream-git-tests - Skip tests specific to the upstream Git repository"
	,"DEBPKG:debian/patchlevel - https://bugs.debian.org/567489 List packaged patches for 5.24.1-3+deb9u5 in patchlevel.h"
	,"DEBPKG:debian/skip-kfreebsd-crash - https://bugs.debian.org/628493 [perl #96272] Skip a crashing test case in t/op/threads.t on GNU/kFreeBSD"
	,"DEBPKG:fixes/document_makemaker_ccflags - https://bugs.debian.org/628522 [rt.cpan.org #68613] Document that CCFLAGS should include $Config{ccflags}"
	,"DEBPKG:debian/find_html2text - https://bugs.debian.org/640479 Configure CPAN::Distribution with correct name of html2text"
	,"DEBPKG:debian/perl5db-x-terminal-emulator.patch - https://bugs.debian.org/668490 Invoke x-terminal-emulator rather than xterm in perl5db.pl"
	,"DEBPKG:debian/cpan-missing-site-dirs - https://bugs.debian.org/688842 Fix CPAN::FirstTime defaults with nonexisting site dirs if a parent is writable"
	,"DEBPKG:fixes/memoize_storable_nstore - [rt.cpan.org #77790] https://bugs.debian.org/587650 Memoize::Storable: respect 'nstore' option not respected"
	,"DEBPKG:debian/regen-skip - Skip a regeneration check in unrelated git repositories"
	,"DEBPKG:debian/makemaker-pasthru - https://bugs.debian.org/758471 Pass LD settings through to subdirectories"
	,"DEBPKG:debian/makemaker-manext - https://bugs.debian.org/247370 Make EU::MakeMaker honour MANnEXT settings in generated manpage headers"
	,"DEBPKG:debian/devel-ppport-reproducibility - https://bugs.debian.org/801523 Sort the list of XS code files when generating RealPPPort.xs"
	,"DEBPKG:debian/encode-unicode-bom-doc - https://bugs.debian.org/798727 Document Debian backport of Encode::Unicode fix"
	,"DEBPKG:debian/kfreebsd-softupdates - https://bugs.debian.org/796798 Work around Debian Bug#796798"
	,"DEBPKG:fixes/autodie-scope - https://bugs.debian.org/798096 Fix a scoping issue with \"no autodie\" and the \"system\" sub"
	,"DEBPKG:fixes/crosscompile-no-targethost - [23695c0] [perl #127234] Fix the Configure escape with usecrosscompile but no targethost"
	,"DEBPKG:fixes/memoize-pod - [rt.cpan.org #89441] Fix POD errors in Memoize"
	,"DEBPKG:fixes/ok-pod - Added encoding for pod."
	,"DEBPKG:debian/hurd-softupdates - https://bugs.debian.org/822735 Fix t/op/stat.t failures on hurd"
	,"DEBPKG:fixes/nntp_docs - https://bugs.debian.org/51962 Net::NNTP: Correct innd/nnrpd confusion in relation to Reader option"
	,"DEBPKG:fixes/math_complex_doc_great_circle - https://bugs.debian.org/697567 [rt.cpan.org #114104] Math::Trig: clarify definition of great_circle_midpoint"
	,"DEBPKG:fixes/math_complex_doc_see_also - https://bugs.debian.org/697568 [rt.cpan.org #114105] Math::Trig: add missing SEE ALSO"
	,"DEBPKG:fixes/math_complex_doc_angle_units - https://bugs.debian.org/731505 [rt.cpan.org #114106] Math::Trig: document angle units"
	,"DEBPKG:fixes/cpan_web_link - https://bugs.debian.org/367291 CPAN: Add link to main CPAN web site"
	,"DEBPKG:fixes/time_piece_doc - https://bugs.debian.org/817925 Time::Piece: Improve documentation for add_months and add_years"
	,"DEBPKG:fixes/perlbug-refactor - https://bugs.debian.org/822463 [perl #128020] perlbug: Refactor duplicated file reading code"
	,"DEBPKG:fixes/perlbug-linewrap - https://bugs.debian.org/822463 [perl #128020] perlbug: wrap overly long lines"
	,"DEBPKG:fixes/hurd_sigaction - https://bugs.debian.org/825016 [d54f4ed] ext/POSIX/t/sigaction.t: Skip uid and pid tests on GNU/Hurd"
	,"DEBPKG:fixes/hurd_hints - [4694301] https://bugs.debian.org/825020 [perl #128279] Modify hints for Hurd per Debian ticket 825020."
	,"DEBPKG:fixes/extutils-parsexs-reproducibility - [perl #128517] https://bugs.debian.org/829296 Make the output of ExtUtils::ParseXS reproducible"
	,"DEBPKG:debian/CVE-2016-1238/sitecustomize-in-etc - Look for sitecustomize.pl in /etc/perl rather than sitelib on Debian systems"
	,"DEBPKG:debian/CVE-2016-1238/test-suite-without-dot - [perl #127810] Patch unit tests to explicitly insert \".\" into @INC when needed."
	,"DEBPKG:debian/CVE-2016-1238/eumm-without-dot - [perl #127810] Add PERL_USE_UNSAFE_INC support to EU::MM for fortify_inc support."
	,"DEBPKG:debian/CVE-2016-1238/cpan-without-dot - [perl #127810] Set PERL_USE_UNSAFE_INC for cpan usage"
	,"DEBPKG:debian/document_inc_removal - Document in perlvar that we remove '.' from @INC by default"
	,"DEBPKG:fixes/extutils_makemaker_reproducible - https://bugs.debian.org/835815 https://bugs.debian.org/834190 Make perllocal.pod files reproducible"
	,"DEBPKG:debian/CVE-2016-1238/remove-inc-test - Remove test for '.' in @INC as it might not be"
	,"DEBPKG:fixes/file_path_hurd_errno - File-Path: Fix test failure in Hurd due to hard-coded ENOENT"
	,"DEBPKG:debian/hppa_op_optimize_workaround - https://bugs.debian.org/838613 Temporarily lower the optimization of op.c on hppa due to gcc-6 problems"
	,"DEBPKG:fixes/test-builder-warning - https://bugs.debian.org/840968 Silence a 'used only once' warning in Test::Builder"
	,"DEBPKG:fixes/longdblinf-randomness - [dd68853] [perl #130133] https://bugs.debian.org/844752 Configure: fix garbage filtering with 80-bit long doubles"
	,"DEBPKG:debian/installman-utf8 - https://bugs.debian.org/840211 Generate man pages with UTF-8 characters"
	,"DEBPKG:fixes/list_assign_leak - [1050723] [perl #130766] https://bugs.debian.org/855064 avoid a leak in list assign from/to magic values"
	,"DEBPKG:fixes/perlfunc_inc_doc - [a03e9f8] https://bugs.debian.org/839536 [perl #130832] Documentation fixes for '.' possibly no longer being in @INC"
	,"DEBPKG:fixes/file_path_chmod_race - https://bugs.debian.org/863870 [rt.cpan.org #121951] Prevent directory chmod race attack."
	,"DEBPKG:fixes/extutils_file_path_compat - Correct the order of tests of chmod(). (#294)"
	,"DEBPKG:debian/customized - Update customized.dat for files patched in Debian"
	,"DEBPKG:fixes/getopt-long-1 - https://bugs.debian.org/855532 [rt.cpan.org #114999] Fix bug RT#114999"
	,"DEBPKG:fixes/getopt-long-2 - [rt.cpan.org #120300] Withdraw part of commit 5d9947fb445327c7299d8beb009d609bc70066c0, which tries to implement more GNU getopt_long campatibility. GNU"
	,"DEBPKG:fixes/getopt-long-3 - provide a default value for optional arguments"
	,"DEBPKG:fixes/getopt-long-4 - https://bugs.debian.org/864544 [rt.cpan.org #122068] Fix issue #122068."
	,"DEBPKG:fixes/fbm-instr-crash - [bb152a4] [perl #131575] https://bugs.debian.org/864782 don't call Perl_fbm_instr() with negative length"
	,"DEBPKG:debian/CVE-2016-1238/base-pm-amends-pt2 - [1afa289] Limit dotless-INC effect on base.pm with guard:"
	,"DEBPKG:fixes/CVE-2017-12837 - https://bugs.debian.org/875596 [perl #131582] [f7e5417] regcomp [perl #131582]"
	,"DEBPKG:fixes/CVE-2017-12883 - https://bugs.debian.org/875597 [perl #131598] [40b3cda] PATCH: [perl #131598]"
	,"DEBPKG:fixes/CVE-2018-6797 - [perl #132227] (perl #132227) restart a node if we change to uni rules within the node and encounter a sharp S"
	,"DEBPKG:fixes/CVE-2018-6798/pt1 - [perl #132063] Heap buffer overflow"
	,"DEBPKG:fixes/CVE-2018-6798/pt2 - [perl #132063] v5.24.3: fix TRIE_READ_CHAR and DECL_TRIE_TYPE to account for non-utf8 target"
	,"DEBPKG:fixes/CVE-2018-6798/pt3 - [perl #132063] (perl #132063) we should no longer warn for this code"
	,"DEBPKG:fixes/CVE-2018-6913 - [perl #131844] (perl #131844) fix various space calculation issues in pp_pack.c"
	,"DEBPKG:fixes/CVE-2018-12015-Archive-Tar-directory-traversal - https://bugs.debian.org/900834 [rt.cpan.org #125523] Remove existing files before overwriting them"
	,"DEBPKG:fixes/CVE-2018-18311 - Perl_my_setenv(); handle integer wrap"
	,"DEBPKG:fixes/CVE-2018-18312 - for 5.26 maint"
	,"DEBPKG:fixes/CVE-2018-18313 - regcomp.c: Convert some strchr to memchr"
	,"DEBPKG:fixes/CVE-2018-18314 - fix #131649 - extended charclass can trigger assert"
