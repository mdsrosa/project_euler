(defn divisibleBy3or5 [number]
  (or
    (zero? (mod number 3) )
    (zero? (mod number 5) ) ))
(def startTime (double (. java.lang.System (clojure.core/nanoTime))))
(println (str "=> Result: " (reduce + (filter divisibleBy3or5 (range 1000)) ) ))
(def endTime (double (. java.lang.System (clojure.core/nanoTime))))
(def seconds (double (/ (- endTime startTime) 1000000000.0)))
(println (str "=> Time: " seconds "s"))
