case "$HOST" in
(*-musl) CXXFLAGS+=' -DBX_CRT_MUSL=1' ;;
esac &&

# Somehow not detected anymore
OPTS+=' TARGETOS=linux' &&
case "$HOST" in
  (x86_64-*|mips64*|powerpc64*|aarch64*|riscv64*)
    OPTS+=' PTR64=1' ;;
esac &&

# Avoid non-fatal errors
OPTS+=' NOWERROR=1' &&

make -j $((${#DISTCC_HOSTS[@]} * JOBS_PER_HOST + MAKE_NJOBS)) $OPTS
