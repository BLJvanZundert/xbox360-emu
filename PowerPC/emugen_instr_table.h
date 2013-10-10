extern bool init();
extern bool decode(State *state, Instruction instr);

bool add(State *state, Instruction instr);
bool addc(State *state, Instruction instr);
bool adde(State *state, Instruction instr);
bool addi(State *state, Instruction instr);
bool addic(State *state, Instruction instr);
bool addico(State *state, Instruction instr);
bool addis(State *state, Instruction instr);
bool addme(State *state, Instruction instr);
bool addze(State *state, Instruction instr);
bool and(State *state, Instruction instr);
bool andc(State *state, Instruction instr);
bool andio(State *state, Instruction instr);
bool andiso(State *state, Instruction instr);
bool b(State *state, Instruction instr);
bool bc(State *state, Instruction instr);
bool bcctr(State *state, Instruction instr);
bool bclr(State *state, Instruction instr);
bool cmp(State *state, Instruction instr);
bool cmpi(State *state, Instruction instr);
bool cmpl(State *state, Instruction instr);
bool cmpli(State *state, Instruction instr);
bool cntlzd(State *state, Instruction instr);
bool cntlzw(State *state, Instruction instr);
bool crand(State *state, Instruction instr);
bool crandc(State *state, Instruction instr);
bool creqv(State *state, Instruction instr);
bool crnand(State *state, Instruction instr);
bool crnor(State *state, Instruction instr);
bool cror(State *state, Instruction instr);
bool crorc(State *state, Instruction instr);
bool crxor(State *state, Instruction instr);
bool dcbf(State *state, Instruction instr);
bool dcbst(State *state, Instruction instr);
bool dcbt(State *state, Instruction instr);
bool dcbtst(State *state, Instruction instr);
bool dcbz(State *state, Instruction instr);
bool divd(State *state, Instruction instr);
bool divdu(State *state, Instruction instr);
bool divw(State *state, Instruction instr);
bool divwu(State *state, Instruction instr);
bool eciwx(State *state, Instruction instr);
bool ecowx(State *state, Instruction instr);
bool eieio(State *state, Instruction instr);
bool eqv(State *state, Instruction instr);
bool extsb(State *state, Instruction instr);
bool extsh(State *state, Instruction instr);
bool extsw(State *state, Instruction instr);
bool fabs(State *state, Instruction instr);
bool fadd(State *state, Instruction instr);
bool fadds(State *state, Instruction instr);
bool fcfid(State *state, Instruction instr);
bool fcmpo(State *state, Instruction instr);
bool fcmpu(State *state, Instruction instr);
bool fctid(State *state, Instruction instr);
bool fctidz(State *state, Instruction instr);
bool fctiw(State *state, Instruction instr);
bool fctiwz(State *state, Instruction instr);
bool fdiv(State *state, Instruction instr);
bool fdivs(State *state, Instruction instr);
bool fmadd(State *state, Instruction instr);
bool fmadds(State *state, Instruction instr);
bool fmr(State *state, Instruction instr);
bool fmsub(State *state, Instruction instr);
bool fmsubs(State *state, Instruction instr);
bool fmul(State *state, Instruction instr);
bool fmuls(State *state, Instruction instr);
bool fnabs(State *state, Instruction instr);
bool fneg(State *state, Instruction instr);
bool fnmadd(State *state, Instruction instr);
bool fnmadds(State *state, Instruction instr);
bool fnmsub(State *state, Instruction instr);
bool fnmsubs(State *state, Instruction instr);
bool fres(State *state, Instruction instr);
bool frsp(State *state, Instruction instr);
bool frsqrte(State *state, Instruction instr);
bool fsel(State *state, Instruction instr);
bool fsqrt(State *state, Instruction instr);
bool fsqrts(State *state, Instruction instr);
bool fsub(State *state, Instruction instr);
bool fsubs(State *state, Instruction instr);
bool icbi(State *state, Instruction instr);
bool isync(State *state, Instruction instr);
bool mfspr(State *state, Instruction instr);
bool stb(State *state, Instruction instr);
bool stbu(State *state, Instruction instr);
bool std(State *state, Instruction instr);
bool stdu(State *state, Instruction instr);
bool sth(State *state, Instruction instr);
bool sthu(State *state, Instruction instr);
bool stw(State *state, Instruction instr);
bool stwu(State *state, Instruction instr);
