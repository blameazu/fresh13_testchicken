# 猜

\begin{figure}[h]
\centering
\includegraphics[width=5in]{photo.png}
\caption{猜}
\end{figure}

猜一個範圍在 $[1, 10000]$ 內的整數，系統也會猜一個範圍在 $[1, 10000]$ 內的整數

假如你猜的數字是 $X$，系統猜的數字是 $Y$

那麼你獲得到的分數為

$$
Score(X, Y) = 100 \times (1 - (\frac{\vert X - Y \vert}{10000})^{\frac{1}{2}})
$$



\clearpage

## 輸入
沒輸入

## 輸出
你要輸出你猜的數字

## 子任務
\subtasks

## hint
這題也許有滿分解:)