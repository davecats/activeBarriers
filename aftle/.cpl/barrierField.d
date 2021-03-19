LOADLIBES+=-lm

barrierField : .cpl/barrierField.o /usr/local/fri/complex.o /usr/local/fri/fft.o  /usr/local/fri/rbmat.o  /usr/local/fri/parallel.o .cpl/wallclock.o /usr/local/fri/rtchecks.o /usr/local/fri/CHARbyCHAR.o /usr/local/fri/inputready.o .cpl/ftledata.o .cpl/xCompactInterface.o
	$(CC) $(LDFLAGS) -o barrierField .cpl/barrierField.o /usr/local/fri/complex.o /usr/local/fri/fft.o  /usr/local/fri/rbmat.o  /usr/local/fri/parallel.o .cpl/wallclock.o /usr/local/fri/rtchecks.o /usr/local/fri/CHARbyCHAR.o /usr/local/fri/inputready.o .cpl/ftledata.o .cpl/xCompactInterface.o $(LOADLIBES) $(LDLIBS)

.cpl/barrierField.c .cpl/barrierField.d : barrierField.cpl /usr/local/fri/complex.cpl /usr/local/fri/fft.cpl /usr/local/fri/fft.cmn /usr/local/fri/rbmat.cpl /usr/local/fri/matrix.cmn /usr/local/fri/parallel.cpl wallclock.cpl /usr/local/fri/rtchecks.cpl /usr/local/fri/CHARbyCHAR.cpl /usr/local/fri/inputready.cpl ftledata.cpl xCompactInterface.cpl