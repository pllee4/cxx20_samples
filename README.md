# CXX20_samples

[![Build](https://github.com/pllee4/cxx20_samples/actions/workflows/build.yml/badge.svg)](https://github.com/pllee4/cxx20_samples/actions/workflows/build.yml)

## Dependencies
- g++ 11 is required for c++20.
- Please refer [docker image](https://github.com/pllee4/docker/blob/master/ubuntu-ci/Dockerfile.20.04-C20) for the requirement of environment.

## Possible Issues
If you encounter the issue as below
```
Error response from daemon: Head "https://registry-1.docker.io/v2/pllee4/ubuntu-ci/manifests/20.04-C20": unauthorized: incorrect username or password
```

Can try the command below to resolve
```
sudo systemctl daemon-reload
sudo systemctl restart docker
sudo docker logout
```