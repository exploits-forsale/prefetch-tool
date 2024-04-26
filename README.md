# Windows KASLR Prefetch Tool
A proof-of-concept tool for bypassing KASLR (kernel ASLR) on Windows 11. Inspired by [EntryBleed](https://www.willsroot.io/2022/12/entrybleed.html) for Linux.

This tool was developed as part of an [exploit targetting Windows 11 24H2](https://exploits.forsale/24h2-nt-exploit/). I am not a side-channel expert at all, so this was very much new territory for me and the code is very hacky 😳 Help improving reliability for different CPU types would be much appreciated.

I have done limited testing with the machines at my disposal. I found the techniques I implemented to be quite reliable on modern Intel CPUs, but much less so on AMD.

### CPU Support
| CPU | Status |
| ----------- | ----------- |
| Intel | 🟢 Reliable |
| AMD | 🟡 Flaky |