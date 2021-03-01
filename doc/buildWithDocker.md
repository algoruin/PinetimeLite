# Build the project using Docker

A [Docker image (Dockerfile)](../docker) containing all the build environment is available for X86_64 and AMD64 architectures. These images make the build of the firmware and the generation of the DFU file for OTA quite easy, as well as preventing clashes with any other toolchains or development environments you may have installed.

Based on Ubuntu 18.04 with the following build dependencies:

* ARM GCC Toolchain
* nRF SDK
* MCUBoot
* adafruit-nrfutil

## Run a container to build the project

The `pinetime-build` image contains all the dependencies you need. The default `CMD` will compile sources found in `/sources`, so you need only mount your code. 

This example  will build the firmware, generate the MCUBoot image and generate the DFU file. Outputs will be written to **<project_root>/build/output**:

```bash
cd <project_root> # e.g. cd ./work/Pinetime
docker run --rm -it -v $(pwd):/sources pinetime-build
```

If you only want to build a single CMake target, you can pass it in as the first parameter to the build script. This means calling the script explicitly as it will override the `CMD`. Here's an example For `pinetime-lite`:

```bash
docker run --rm -it -v $(pwd):/sources pinetime-build /opt/build.sh pinetime-lite
```

The image is built using 1000:1000 for the user id and group id. If this is different to your user or group ids (run `id -u` and `id -g` to find out what your id values are if you are unsure), you will need to override them via the `--user` parameter in order to prevent permission errors with the output files (and the cmake build cache).

Running with this image is the same as above, you just specify the ids to `docker run`

```bash
docker run --rm -it -v $(pwd):/sources --user $(id -u):$(id -g) pfeerick/pinetime-build
```

Or you can specify your user id and group id (by number, not by name) directly:

```bash
docker run --rm -it -v $(pwd):/sources --user 1234:1234 pinetime-build
```

## Using the image from Docker Hub

The image is avaiable via Docker Hub for both the amd64 and arm64v8 architectures at [pfeerick/pinetime-build](https://hub.docker.com/repository/docker/pfeerick/pinetime-build).

It can be pulled (downloaded) using the following command:

```bash
docker pull pfeerick/pinetime-build
```

The default `latest` tag *should* automatically identify the correct image architecture, but if for some reason Docker does not, you can specify it manually:

* For AMD64 (x86_64) systems: `docker pull pfeerick/pinetime-build:amd64`

* For ARM64v8 (ARM64/aarch64) systems: `docker pull pfeerick/pinetime-build:arm64v8`

## Build the image

You can build the image yourself if you like!

The following commands must be run from the root of the project. This operation will take some time but, when done, a new image named *pinetime-build* is available.

```bash
docker image build -t pinetime-build ./docker
```

The `PUID` and `PGID` build arguments are used to set the user and group ids used in the container, meaning you will not need to specify it later unless they change for some reason. Specifying them is not mandatory, as this can be over-ridden at build time via the `--user` flag, but doing so will make the command you need to run later a bit shorter. In the below examples, they are set to your current user id and group id automatically. You can specify them manually, but they must be specified by number, not by name.

```bash
docker image build -t pinetime-build --build-arg PUID=$(id -u) --build-arg PGID=$(id -g) ./docker
```
