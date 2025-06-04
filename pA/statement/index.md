# AplusBproblem

\begin{figure}[h]
\centering
\includegraphics[width=4in]{photo.png}
\caption{世紀難題}
\end{figure}

你被給了二整數 $A$ $B$

求 $A+B$

\clearpage

## 輸入
第一行輸入一整數 $A$

第二行輸入一整數 $B$

## 輸出
輸出一行整數，代表 $A+B$ 之值

## 輸入限制
 - $\vert A \vert \le 2 \cdot 10^9$
 - $\vert B \vert \le 2 \cdot 10^9$

## 子任務
\subtasks

\clearpage

## 範例輸入 1
\testfile{0-01.in}

## 範例輸出 1
\testfile{0-01.out}

## 範例解釋 1
基礎題型，二個位數的加減，可以使用直式來解決此問題。

\begin{figure}[h]
\centering
\includegraphics[width=5in]{ex1.png}
\end{figure}

## 範例輸入 2
\testfile{0-02.in}

## 範例解釋 2
資優題型，加法已經達到 $10$ 以上了，必須往下一高位累加。

\begin{figure}[h]
\centering
\includegraphics[width=5in]{ex2.png}
\end{figure}

## 範例輸出 2
\testfile{0-02.out}

## 範例輸入 3
\testfile{0-03.in}

## 範例輸出 3
\testfile{0-03.out}

## 範例解釋 3
這題有點超綱，你需要從最低位開始進行加法，假如已經達到 $10$ 以上，必須得 $1$ 往前累加!

有點困難，建議讀者仔細觀察並思考。

\begin{figure}[h]
\centering
\includegraphics[width=5in]{ex3.png}
\end{figure}