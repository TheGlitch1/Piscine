#!/bin/bash
cat /dev/stdin |  grep -E "theo1|steven1|arnaud1|pierre-jean" | sed -e 's/theo1/Wile E. Coyote/' | sed -e 's/steven1/Daffy Duck/' | sed -e 's/arnaud1/Porky Pig/' | sed -e 's/pierre-jean/Marvin the Martian/'
