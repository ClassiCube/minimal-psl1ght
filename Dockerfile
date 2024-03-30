FROM ubuntu:22.04

RUN apt install bash nvidia-cg-toolkit tar gzip

RUN echo "## Exporting ps3dev environment" >> /root/.bashrc
RUN echo "export PS3DEV=/usr/local/ps3dev" >> /root/.bashrc
RUN echo "export PSL1GHT=\$PS3DEV" >> /root/.bashrc
RUN echo "export PATH=\$PATH:\$PS3DEV/bin" >> /root/.bashrc
RUN echo "export PATH=\$PATH:\$PS3DEV/ppu/bin" >> /root/.bashrc
RUN echo "export PATH=\$PATH:\$PS3DEV/spu/bin" >> /root/.bashrc
RUN echo "export PATH=\$PATH:\$PS3DEV/portlibs/ppu/bin" >> /root/.bashrc

COPY . /usr/local/ps3dev
