#!/bin/bash
git add .
git commit -m $0 || git commit -m "Revision"
git push origin master
