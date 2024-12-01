if docker build --rm --force-rm . -t local/cxx20_samples:latest -f ./Dockerfile.cxx20_samples ; then
    DIR=$(pwd)
    docker run -it --volume="$DIR/src:/cxx20_samples/src" local/cxx20_samples:latest
else
    echo "Build error!"
    exit 1
fi