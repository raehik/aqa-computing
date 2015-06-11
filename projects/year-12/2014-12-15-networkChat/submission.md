**folder:** https://github.com/raehik/networkChat
**commit:** https://github.com/raehik/networkChat/commit/96c36e0e1185820fe47630a8315671cd612779a3

    96c36e0: add threading & make it work!
    7e38475: +docs
    a30174c: move files around to allow more than just source
    eb7b5d0: initial commit: grab some socket tests from Oracle

Latest commit was basically creating the whole program, since I did most
of the threading & sockets biz in an afternoon sprint back in Christmas
break. Requires a lot of cleanup, but the core is present and working --
surprisingly -- without a hitch (even though I don't actually drop
clients at all).

Multithreaded server. Keeps a listener thread for new clients and
assigns a thread and handler to each connected client. No idea about
implementation of file sending. I know about IRC [X]DCC, but all I can
find on that is that it sends data in blocks, with the client
acknowledging by sending back the number of bytes received. Not sure how
I'd tell the client that the file's finished sending.

No GUI. That was Rory's job, but he had issues with email and couldn't
get WindowBuilder on the school computer he was using before, or some
other reason. I didn't bother because it's boring work which requires
just patience and some simple hooking between my code and the GUI
elements.

No evidence of it working since I haven't got a quick video setup (only
good for GIFs). Works on my machine :)
