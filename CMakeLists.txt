cmake_minimum_required(VERSION 3.21)
project(xv6)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(cmake-build-debug)
include_directories(xv6-riscv)
include_directories(xv6-riscv/kernel)
include_directories(xv6-riscv/mkfs)
include_directories(xv6-riscv/user)

add_executable(xv6
        .idea/.gitignore
        .idea/encodings.xml
        .idea/misc.xml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        .idea/xv6.iml
        cmake-build-debug/.cmake/api/v1/query/cache-v2
        cmake-build-debug/.cmake/api/v1/query/cmakeFiles-v1
        cmake-build-debug/.cmake/api/v1/query/codemodel-v2
        cmake-build-debug/.cmake/api/v1/query/toolchains-v1
        cmake-build-debug/.cmake/api/v1/reply/cache-v2-4655a20665cbfee43ce2.json
        cmake-build-debug/.cmake/api/v1/reply/cmakeFiles-v1-49aa193b33eb56d139e1.json
        cmake-build-debug/.cmake/api/v1/reply/codemodel-v2-b1f991968f2311a756d6.json
        cmake-build-debug/.cmake/api/v1/reply/directory-.-Debug-d0094a50bb2071803777.json
        cmake-build-debug/.cmake/api/v1/reply/index-2023-04-10T09-16-15-0416.json
        cmake-build-debug/.cmake/api/v1/reply/target-xv6-Debug-979fa3005f7b8825da44.json
        cmake-build-debug/.cmake/api/v1/reply/toolchains-v1-5abeb6f44f275ca4d006.json
        cmake-build-debug/Testing/Temporary/LastTest.log
        cmake-build-debug/build.ninja
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/xv6.cbp
        xv6-riscv/kernel/bio.c
        xv6-riscv/kernel/buf.h
        xv6-riscv/kernel/console.c
        xv6-riscv/kernel/defs.h
        xv6-riscv/kernel/elf.h
        xv6-riscv/kernel/entry.S
        xv6-riscv/kernel/exec.c
        xv6-riscv/kernel/fcntl.h
        xv6-riscv/kernel/file.c
        xv6-riscv/kernel/file.h
        xv6-riscv/kernel/fs.c
        xv6-riscv/kernel/fs.h
        xv6-riscv/kernel/kalloc.c
        xv6-riscv/kernel/kernel.ld
        xv6-riscv/kernel/kernelvec.S
        xv6-riscv/kernel/log.c
        xv6-riscv/kernel/main.c
        xv6-riscv/kernel/memlayout.h
        xv6-riscv/kernel/param.h
        xv6-riscv/kernel/pipe.c
        xv6-riscv/kernel/plic.c
        xv6-riscv/kernel/printf.c
        xv6-riscv/kernel/proc.c
        xv6-riscv/kernel/proc.h
        xv6-riscv/kernel/ramdisk.c
        xv6-riscv/kernel/riscv.h
        xv6-riscv/kernel/sleeplock.c
        xv6-riscv/kernel/sleeplock.h
        xv6-riscv/kernel/spinlock.c
        xv6-riscv/kernel/spinlock.h
        xv6-riscv/kernel/start.c
        xv6-riscv/kernel/stat.h
        xv6-riscv/kernel/string.c
        xv6-riscv/kernel/swtch.S
        xv6-riscv/kernel/syscall.c
        xv6-riscv/kernel/syscall.h
        xv6-riscv/kernel/sysfile.c
        xv6-riscv/kernel/sysproc.c
        xv6-riscv/kernel/trampoline.S
        xv6-riscv/kernel/trap.c
        xv6-riscv/kernel/types.h
        xv6-riscv/kernel/uart.c
        xv6-riscv/kernel/virtio.h
        xv6-riscv/kernel/virtio_disk.c
        xv6-riscv/kernel/vm.c
        xv6-riscv/mkfs/mkfs.c
        xv6-riscv/user/cat.c
        xv6-riscv/user/echo.c
        xv6-riscv/user/forktest.c
        xv6-riscv/user/grep.c
        xv6-riscv/user/grind.c
        xv6-riscv/user/init.c
        xv6-riscv/user/initcode.S
        xv6-riscv/user/kill.c
        xv6-riscv/user/ln.c
        xv6-riscv/user/ls.c
        xv6-riscv/user/mkdir.c
        xv6-riscv/user/printf.c
        xv6-riscv/user/rm.c
        xv6-riscv/user/sh.c
        xv6-riscv/user/stressfs.c
        xv6-riscv/user/ulib.c
        xv6-riscv/user/umalloc.c
        xv6-riscv/user/user.h
        xv6-riscv/user/user.ld
        xv6-riscv/user/usertests.c
        xv6-riscv/user/usys.pl
        xv6-riscv/user/wc.c
        xv6-riscv/user/zombie.c
        xv6-riscv/.dir-locals.el
        xv6-riscv/.editorconfig
        xv6-riscv/.gdbinit.tmpl-riscv
        xv6-riscv/.gitignore
        xv6-riscv/LICENSE
        xv6-riscv/Makefile
        xv6-riscv/README
        "New Text Document.txt"
        xv6-riscv/user/getProcTicksTest.c xv6-riscv/user/sysinfoTest.c xv6-riscv/kernel/sysinfo.h)
