sudo docker build --rm --force-rm . -t local/cxx20_samples:latest -f ./Dockerfile.cxx20_samples
sudo docker run -it local/cxx20_samples:latest