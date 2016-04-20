Operating systems
=================

Role of an OS
-------------

An OS does these two main things:

  * **Hide hardware complexities** from programs/user ('virtual machine')
  * **Manage resources** for programs to ensure everything gets time to execute
    and that stuff doesn't have to be implemented individually for each program


### Resource management

  * **Processors** -> processor scheduling
  * **Storage** -> memory management
  * **I/O devices** -> I/O management
  * **Data** -> file management


### 'Virtual machine'

**Virtual machine:** the apparent machine that the OS presents to the user,
                     achieved by hiding the complexities of the hardware behind
                     layers of OS software

Essentially, an OS presents a 'virtual machine' to the user and software, which
is an interface to the underlying hardware. In this way, software can use a
generic API provided by the OS and know that it would also work on another
computer running the same OS.

*(Note: In the real world, we call this a kernel, or just API/function calls. A
virtual machine is something entirely different... \***facepalm\**


OS classification
-----------------

### Types of OS

  * Interactive
      * User can interact with system & vice versa.
      * e.g. ATM
  * Real-time
      * Gives a guaranteed response within a concrete time period
      * *"the right answer late is wrong"*
      * e.g. Plane rudder control system
  * Batch/transaction
      * Input is queued and processed in batches when required or in time
        intervals
      * **Not time-critical**
  * Network
      * (kinda fake...): A **layer of software** which intercepts commands
        referencing resources elsewhere on the network and redirects them to the
        remote resource in a manner transparent to the user
      * e.g. how Windows lets you add 'remote drives' (D:, ... N:, ...)
      * Can *also* be interactive & real-time

Network can be thought of as another 'base' OS. It's kind of stupid how they
explain/use it.


### Benefits of an OS over firmware

Not all computers need an OS. For devices which may only perform one function,
e.g. a washing machine, using an OS would **inflate production costs** and make
things **unnecessarily complex**, so I think all washing machines use chips with
embedded **firmware**. However, OSs can provide these functions:

  * multitasking
  * potential real-time operation
  * upgrade hardware without having to change software
  * OS replacement/upgrading, again without losing software functionality


### Different devices using OSs and not

  * **Embedded computer system:** system with a limited or non-existent UI,
    designed to operate autonomously from within other machinery
  * **Desktop OS:** an OS that allows a user to carry out a broad range of
    *general-purpose tasks*
  * **Client-server system:** a system in which *clients* request services
    provided by *servers*, both being computers
  * **Server OS:** an OS optimised to providing one or more services to
    networked clients

**Smartphones** are now also computers with a generic OS. Developing for them is
easy due to a standard API and often SDKs.

**PDAs** are some old shit which have been obsoleted by the rise of smartphones.
However, both of these devices have similar requirements for their OS, in that
they need to **save energy** wherever possible, and run on very limited
resources (though this is less of a problem for today's smartphones).

Cars these days would likely have a bunch of separate embedded computers, each
with a dedicated purpose. The book mentions it's likely that as such hardware is
developed and made more complex over time, things are going to move to OSs. e.g.
it might start with having a basic kernel which switches between tasks based on
a timer.

Also consider that embedded systems *can be pretty complex*. Think about F1
cars! Though to be honest they might just about qualify as OSs -- exactly!

**Desktop OSs** nowadays have to do an awful lot: real-time processing for
multimedia, shitloads of network protocols, handling multiple virtual disks
(partitions), and way more. They are written **modularly** so that different
parts can be upgraded separately. You can also assume that they have relatively
high memory and processor speed requirements.

The whole thing with clients and servers in this bit is that a client OS could
ask a server OS to do something for it, e.g. build a program or store files, and
it would theoretically be much faster/better because the server would be
**optimised** for its respective service(s), and the client OS has less
**general-purpose processing** to do.
