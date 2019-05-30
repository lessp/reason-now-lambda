#!/usr/bin/env sh

set -eo pipefail

rm -rf bootstrap
docker build . --tag nowlambda
docker rm rnow || true
docker create --name rnow nowlambda
docker cp rnow:/app/bootstrap bootstrap

cd $root_path
